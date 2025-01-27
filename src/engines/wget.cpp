/*
 *
 *  Copyright (c) 2022
 *  name : Francis Banyikwa
 *  email: mhogomchungu@gmail.com
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "wget.h"
#include "../utility.h"

wget::wget( const engines& e,const engines::engine& s,QJsonObject& ) :
	engines::engine::functions( e.Settings(),s,e.processEnvironment() )
{
}

void wget::updateDownLoadCmdOptions( const engines::engine::functions::updateOpts& s )
{
	engines::engine::functions::updateDownLoadCmdOptions( s ) ;

	if( !s.ourOptions.contains( "--progress=bar:force" ) ){

		s.ourOptions.append( "--progress=bar:force" ) ;
	}
}

wget::~wget()
{
}
