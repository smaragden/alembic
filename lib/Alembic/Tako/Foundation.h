//-*****************************************************************************
//
// Copyright (c) 2009-2010,
//  Sony Pictures Imageworks Inc. and
//  Industrial Light & Magic, a division of Lucasfilm Entertainment Company Ltd.
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
// *       Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
// *       Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
// *       Neither the name of Sony Pictures Imageworks, nor
// Industrial Light & Magic, nor the names of their contributors may be used
// to endorse or promote products derived from this software without specific
// prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
//-*****************************************************************************

#ifndef _Alembic_Tako_Foundation_h_
#define _Alembic_Tako_Foundation_h_

#include <Alembic/Tako/Version.h>

#include <Alembic/HDF5/HDF5.h>
#include <Alembic/Util/PlainOldDataType.h>

#include <ImathMatrix.h>

#include <boost/variant.hpp>
#include <boost/smart_ptr.hpp>
#include <boost/utility.hpp>
#include <boost/make_shared.hpp>

#include <stdexcept>
#include <exception>
#include <limits>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <utility>
#include <iostream>
#include <sstream>
#include <string>

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <sys/types.h>

namespace Alembic {

namespace Tako {

//-*****************************************************************************
// POD TYPES
using ::Alembic::Util::uint8_t; 
using ::Alembic::Util::int8_t;  
using ::Alembic::Util::uint16_t;
using ::Alembic::Util::int16_t; 
using ::Alembic::Util::uint32_t;
using ::Alembic::Util::int32_t; 
using ::Alembic::Util::uint64_t;
using ::Alembic::Util::int64_t; 
using ::Alembic::Util::float16_t;
using ::Alembic::Util::float32_t;
using ::Alembic::Util::float64_t;

/**
\brief A typedef to a uint32_t used for indexing.

index_t is a typedef for a uint32_t and is meant to be used as the base type
for arrays of indices like poly meshes.
*/
typedef uint32_t index_t;

} // End namespace Tako

} // End namespace Alembic

#endif