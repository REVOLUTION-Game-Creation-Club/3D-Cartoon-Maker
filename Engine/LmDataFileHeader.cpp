
#include "stdafx.h"
#include "LmDataFileHeader.h"

VOID LmDataFileHeader::ClearHeader()
{
	m_uSceneViewStart = 0;
	m_uSceneViewEnd = 0;
}

VOID LmDataFileHeader::SaveHeader( CFile &_File )
{
	_File.Write(this, sizeof(LmDataFileHeader));
}

VOID LmDataFileHeader::OpenHeader( CFile &_File )
{
	_File.Read(this, sizeof(LmDataFileHeader));
}