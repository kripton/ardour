/*
	Copyright (C) 2006,2007 John Anderson
	Copyright (C) 2012 Paul Davis

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; either version 2 of the License, or
	(at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#ifndef __ardour_mackie_control_protocol_ledring_h__
#define __ardour_mackie_control_protocol_ledring_h__

#include "controls.h"
#include "led.h"

namespace Mackie {

class LedRing : public Led
{
public:
	LedRing (int id, int ordinal, std::string name, Group & group)
		: Led (id, ordinal, name, group)
	{
	}

	virtual type_t type() const { return type_led_ring; }
};

}

#endif