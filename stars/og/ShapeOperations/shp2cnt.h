/**
 * OpenGeoDa TM, Copyright (C) 2011 by Luc Anselin - all rights reserved
 *
 * This file is part of OpenGeoDa.
 * 
 * OpenGeoDa is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenGeoDa is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GEODA_CENTER_SHP_2_CNT_H__
#define __GEODA_CENTER_SHP_2_CNT_H__

#include "GalWeight.h"
#include <vector>

bool IsLineShapeFile(const char* fname);
#define geoda_sqr(x) ( (x) * (x) )
GalElement* HOContiguity(const int p, long obs, GalElement *W, bool Lag);
/*
GalElement* shp2gal(const wxString& fname, int criteria, bool save= true);
bool SaveGal(const GalElement *full, const wxString& ifname, 
			 const wxString& ofname, const wxString& vname,
			 const std::vector<wxInt64>& id_vec);
*/		 
GalElement* shp2gal(const char* fname, int criteria, bool save= true);
bool SaveGal(const GalElement *full,
			 const char* ofname, 
			 const char* vname,
			 const std::vector<int>& id_vec);


#endif

