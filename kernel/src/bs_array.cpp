// This file is part of BlueSky
// 
// BlueSky is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 3
// of the License, or (at your option) any later version.
// 
// BlueSky is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// 
// You should have received a copy of the GNU General Public License
// along with BlueSky; if not, see <http://www.gnu.org/licenses/>.

#if defined(BSPY_EXPORTING) && defined(UNIX)
// supress gcc warnings
#include <boost/python/detail/wrap_python.hpp>
#endif
#include "bs_array.h"
#include "bs_map.h"

using namespace std;

namespace blue_sky {
// bs_array
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (int, vector_traits));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (unsigned int, vector_traits));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (long, vector_traits));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (long long, vector_traits));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (unsigned long, vector_traits));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (unsigned long long, vector_traits));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (float, vector_traits));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (double, vector_traits));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (std::string, vector_traits));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (std::wstring, vector_traits));

BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (int, bs_array_shared));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (unsigned int, bs_array_shared));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (long, bs_array_shared));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (long long, bs_array_shared));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (unsigned long, bs_array_shared));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (unsigned long long, bs_array_shared));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (float, bs_array_shared));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (double, bs_array_shared));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (std::string, bs_array_shared));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (std::wstring, bs_array_shared));

BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (int, bs_vector_shared));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (unsigned int, bs_vector_shared));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (long, bs_vector_shared));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (long long, bs_vector_shared));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (unsigned long, bs_vector_shared));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (unsigned long long, bs_vector_shared));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (float, bs_vector_shared));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (double, bs_vector_shared));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (std::string, bs_vector_shared));
BS_TYPE_IMPL_T_EXT_MEM(bs_array, 2, (std::wstring, bs_vector_shared));

// bs_map
BS_TYPE_IMPL_T_EXT_MEM(bs_map, 2, (int, str_val_traits));
BS_TYPE_IMPL_T_EXT_MEM(bs_map, 2, (unsigned int, str_val_traits));
BS_TYPE_IMPL_T_EXT_MEM(bs_map, 2, (long, str_val_traits));
BS_TYPE_IMPL_T_EXT_MEM(bs_map, 2, (long long, str_val_traits));
BS_TYPE_IMPL_T_EXT_MEM(bs_map, 2, (unsigned long, str_val_traits));
BS_TYPE_IMPL_T_EXT_MEM(bs_map, 2, (unsigned long long, str_val_traits));
BS_TYPE_IMPL_T_EXT_MEM(bs_map, 2, (float, str_val_traits));
BS_TYPE_IMPL_T_EXT_MEM(bs_map, 2, (double, str_val_traits));
BS_TYPE_IMPL_T_EXT_MEM(bs_map, 2, (std::string, str_val_traits));
BS_TYPE_IMPL_T_EXT_MEM(bs_map, 2, (std::wstring, str_val_traits));
BS_TYPE_IMPL_T_EXT_MEM(bs_map, 2, (sp_obj, str_val_traits));

#ifdef BSPY_EXPORTING
// forward declarations of Python-related array types
kernel::types_enum register_nparray();
kernel::types_enum register_npvec();
kernel::types_enum register_npvec_shared();
#endif

kernel::types_enum register_bs_array() {
	kernel::types_enum te;
	te.push_back(bs_array< int, vector_traits >::bs_type());
	te.push_back(bs_array< unsigned int, vector_traits >::bs_type());
	te.push_back(bs_array< long, vector_traits >::bs_type());
	te.push_back(bs_array< long long, vector_traits >::bs_type());
	te.push_back(bs_array< unsigned long, vector_traits >::bs_type());
	te.push_back(bs_array< unsigned long long, vector_traits >::bs_type());
	te.push_back(bs_array< float, vector_traits >::bs_type());
	te.push_back(bs_array< double, vector_traits >::bs_type());
	te.push_back(bs_array< std::string, vector_traits >::bs_type());
	te.push_back(bs_array< std::wstring, vector_traits >::bs_type());

	te.push_back(bs_array< int, bs_array_shared >::bs_type());
	te.push_back(bs_array< unsigned int, bs_array_shared >::bs_type());
	te.push_back(bs_array< long, bs_array_shared >::bs_type());
	te.push_back(bs_array< long long, bs_array_shared >::bs_type());
	te.push_back(bs_array< unsigned long, bs_array_shared >::bs_type());
	te.push_back(bs_array< unsigned long long, bs_array_shared >::bs_type());
	te.push_back(bs_array< float, bs_array_shared >::bs_type());
	te.push_back(bs_array< double, bs_array_shared >::bs_type());
	te.push_back(bs_array< std::string, bs_array_shared >::bs_type());
	te.push_back(bs_array< std::wstring, bs_array_shared >::bs_type());

	te.push_back(bs_array< int, bs_vector_shared >::bs_type());
	te.push_back(bs_array< unsigned int, bs_vector_shared >::bs_type());
	te.push_back(bs_array< long, bs_vector_shared >::bs_type());
	te.push_back(bs_array< long long, bs_vector_shared >::bs_type());
	te.push_back(bs_array< unsigned long, bs_vector_shared >::bs_type());
	te.push_back(bs_array< unsigned long long, bs_vector_shared >::bs_type());
	te.push_back(bs_array< float, bs_vector_shared >::bs_type());
	te.push_back(bs_array< double, bs_vector_shared >::bs_type());
	te.push_back(bs_array< std::string, bs_vector_shared >::bs_type());
	te.push_back(bs_array< std::wstring, bs_vector_shared >::bs_type());

	te.push_back(bs_map< int, str_val_traits >::bs_type());
	te.push_back(bs_map< unsigned int, str_val_traits >::bs_type());
	te.push_back(bs_map< long, str_val_traits >::bs_type());
	te.push_back(bs_map< long long, str_val_traits >::bs_type());
	te.push_back(bs_map< unsigned long, str_val_traits >::bs_type());
	te.push_back(bs_map< unsigned long long, str_val_traits >::bs_type());
	te.push_back(bs_map< float, str_val_traits >::bs_type());
	te.push_back(bs_map< double, str_val_traits >::bs_type());
	te.push_back(bs_map< std::string, str_val_traits >::bs_type());
	te.push_back(bs_map< std::wstring, str_val_traits >::bs_type());
	te.push_back(bs_map< sp_obj, str_val_traits >::bs_type());

#ifdef BSPY_EXPORTING
	kernel::types_enum pyte;
	pyte = register_nparray();
	std::copy(pyte.begin(), pyte.end(), std::back_insert_iterator< kernel::types_enum >(te));
	pyte = register_npvec();
	std::copy(pyte.begin(), pyte.end(), std::back_insert_iterator< kernel::types_enum >(te));
	pyte = register_npvec_shared();
	std::copy(pyte.begin(), pyte.end(), std::back_insert_iterator< kernel::types_enum >(te));
#endif

	return te;
}

}	// end of blue_sky namespace

