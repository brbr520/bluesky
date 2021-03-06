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

#ifndef BS_ARRAY_SERIALIZE_ATPO4NI3
#define BS_ARRAY_SERIALIZE_ATPO4NI3

#include "bs_array.h"
#include "bs_serialize_macro.h"
#include "bs_serialize_decl.h"

#include <boost/serialization/serialization.hpp>
#include <boost/serialization/export.hpp>
#include <boost/archive/polymorphic_iarchive.hpp>
#include <boost/archive/polymorphic_oarchive.hpp>

#define BS_ARRAY_GUID_VALUE(T, cont_traits) \
BLUE_SKY_TYPE_SERIALIZE_GUID_EXT(blue_sky::bs_array, 2, (T, blue_sky::cont_traits))

BLUE_SKY_TYPE_SERIALIZE_DECL_EXT(blue_sky::bs_array, 2, (class, template< class > class))

BLUE_SKY_CLASS_SRZ_FCN_DECL_EXT(serialize, blue_sky::bs_array, 2, (class, template< class > class))

BS_ARRAY_GUID_VALUE(int, vector_traits)
BS_ARRAY_GUID_VALUE(unsigned int, vector_traits)
BS_ARRAY_GUID_VALUE(long, vector_traits)
BS_ARRAY_GUID_VALUE(long long, vector_traits)
BS_ARRAY_GUID_VALUE(unsigned long, vector_traits)
BS_ARRAY_GUID_VALUE(unsigned long long, vector_traits)
BS_ARRAY_GUID_VALUE(float, vector_traits)
BS_ARRAY_GUID_VALUE(double, vector_traits)
BS_ARRAY_GUID_VALUE(std::string, vector_traits)

BS_ARRAY_GUID_VALUE(int, bs_array_shared)
BS_ARRAY_GUID_VALUE(unsigned int, bs_array_shared)
BS_ARRAY_GUID_VALUE(long, bs_array_shared)
BS_ARRAY_GUID_VALUE(long long, bs_array_shared)
BS_ARRAY_GUID_VALUE(unsigned long, bs_array_shared)
BS_ARRAY_GUID_VALUE(unsigned long long, bs_array_shared)
BS_ARRAY_GUID_VALUE(float, bs_array_shared)
BS_ARRAY_GUID_VALUE(double, bs_array_shared)
BS_ARRAY_GUID_VALUE(std::string, bs_array_shared)

BS_ARRAY_GUID_VALUE(int, bs_vector_shared)
BS_ARRAY_GUID_VALUE(unsigned int, bs_vector_shared)
BS_ARRAY_GUID_VALUE(long, bs_vector_shared)
BS_ARRAY_GUID_VALUE(long long, bs_vector_shared)
BS_ARRAY_GUID_VALUE(unsigned long, bs_vector_shared)
BS_ARRAY_GUID_VALUE(unsigned long long, bs_vector_shared)
BS_ARRAY_GUID_VALUE(float, bs_vector_shared)
BS_ARRAY_GUID_VALUE(double, bs_vector_shared)
BS_ARRAY_GUID_VALUE(std::string, bs_vector_shared)

#if defined(BSPY_EXPORTING) || defined(BSPY_EXPORTING_PLUGIN)
#include "bs_npvec_shared.h"

BS_ARRAY_GUID_VALUE(int, bs_npvec)
BS_ARRAY_GUID_VALUE(unsigned int, bs_npvec)
BS_ARRAY_GUID_VALUE(long, bs_npvec)
BS_ARRAY_GUID_VALUE(long long, bs_npvec)
BS_ARRAY_GUID_VALUE(unsigned long, bs_npvec)
BS_ARRAY_GUID_VALUE(unsigned long long, bs_npvec)
BS_ARRAY_GUID_VALUE(float, bs_npvec)
BS_ARRAY_GUID_VALUE(double, bs_npvec)
BS_ARRAY_GUID_VALUE(std::string, bs_npvec)

BS_ARRAY_GUID_VALUE(int, bs_npvec_shared)
BS_ARRAY_GUID_VALUE(unsigned int, bs_npvec_shared)
BS_ARRAY_GUID_VALUE(long, bs_npvec_shared)
BS_ARRAY_GUID_VALUE(long long, bs_npvec_shared)
BS_ARRAY_GUID_VALUE(unsigned long, bs_npvec_shared)
BS_ARRAY_GUID_VALUE(unsigned long long, bs_npvec_shared)
BS_ARRAY_GUID_VALUE(float, bs_npvec_shared)
BS_ARRAY_GUID_VALUE(double, bs_npvec_shared)
BS_ARRAY_GUID_VALUE(std::string, bs_npvec_shared)
#endif

#endif /* end of include guard: BS_ARRAY_SERIALIZE_ATPO4NI3 */

