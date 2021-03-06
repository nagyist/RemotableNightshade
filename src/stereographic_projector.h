/*
 * Copyright (C) 2002 Fabien Chereau
 * Author 2006 Johannes Gajdosik
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 3
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 */

#ifndef _STEREOGRAPHIC_PROJECTOR_H_
#define _STEREOGRAPHIC_PROJECTOR_H_

#include "custom_projector.h"

class StereographicProjector : public CustomProjector
{
public:
	StereographicProjector(const Vec4i & viewport, double _fov);
private:
	PROJECTOR_TYPE getType(void) const {
		return STEREOGRAPHIC_PROJECTOR;
	}
	bool project_custom(const Vec3d &v, Vec3d &win, const Mat4d &mat) const;
	void unproject(double x, double y, const Mat4d& m, Vec3d& v) const;
};


#endif
