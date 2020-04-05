#include "stdafx.h"
#include "LmDefine.h"

LmBoundBox::LmBoundBox()
{
	// 절대적으로 작은 값으로 초기화한다.
	vMin.x = FLT_MAX;
	vMin.y = FLT_MAX;
	vMin.z = FLT_MAX;

	vMax.x = -FLT_MAX;
	vMax.y = -FLT_MAX;
	vMax.z = -FLT_MAX;
}

BOOL LmBoundBox::isPointInside(D3DXVECTOR3& _vP)
{
	if( _vP.x >= vMin.x && _vP.y >= vMin.y && _vP.z >= vMin.z &&
		_vP.x <= vMax.x && _vP.y <= vMax.y && _vP.z <= vMax.z )
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

LmBoundSphere::LmBoundSphere()
{
	fRadius = 0.0f;
}

