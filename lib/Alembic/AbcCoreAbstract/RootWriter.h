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

#ifndef _Alembic_AbcCoreAbstract_RootWriter_h_
#define _Alembic_AbcCoreAbstract_RootWriter_h_

#include <Alembic/AbcCoreAbstract/Foundation.h>
#include <Alembic/AbcCoreAbstract/ObjectWriter.h>

namespace Alembic {
namespace AbcCoreAbstract {
namespace v1 {

//-*****************************************************************************
//! The Root Object is the top-level object in an archive. It has a fixed
//! name of "/", which is also its full name. There is one and only one root
//! object associated with each archive. It is functionally an object, and is
//! derived from Object. However, it also acts as a reference-counted handle
//! for the entire archive, and it is possible to force closure of all objects
//! in the file (normally closed by deleting the writer).
class RootWriter : public ObjectWriter
{
public:
    //! Virtual destructor
    //! ...
    virtual ~RootWriter() {}

    //-*************************************************************************
    // NEW FUNCTIONS
    //-*************************************************************************
    
    //! Return the archive (file) name. This is the name of the file
    //! which the root writer is associated with.
    virtual const std::string &getArchiveName() const = 0;

    //-*************************************************************************
    // INHERITED
    //-*************************************************************************

    //! Inherited from ObjectWriter, returns the fixed name for all
    //! root objects, which is "/"
    virtual const std::string &getName() const;

    //! Inherited from ObjectWriter, returns the fixed full name for all
    //! root objects, which is "/"
    virtual const std::string &getFullName() const;

    //! Inherited from ObjectWriter,
    //! returns a shared pointer to this.
    virtual RootWriterPtr getRoot();

    //! Inherited from ObjectWriter,
    //! returns an empty shared pointer, since we have no parent.
    virtual ObjectWriterPtr getParent();

    //! Inherited from ObjectWriter, not implemented herein.
    //! virtual const MetaData &getMetaData() const = 0;

    //! Inherited from ObjectWriter, not implemented herein
    //! virtual void appendMetaData( const MetaData &iAppend ) = 0;

    //! Inherited from ObjectWriter, not implemented herein.
    //! virtual CompoundPropertyWriterPtr getProperties() = 0;

    //! Inherited from ObjectWriter, not implemented herein.
    //! virtual size_t getNumChildren() = 0;

    //! Inherited from ObjectWriter, not implemented herein.
    //! virtual ObjectWriterPtr getChild( size_t i ) = 0;

    //! Inherited from ObjectWriter, not implemented herein.
    //! virtual ObjectWriterPtr getChild( const std::string &iName ) = 0;
    
    //! Inherited from ObjectWriter, not implemented herein.
    //! virtual ObjectWriterPtr createChild( const std::string &iName,
    //!                                      const MetaData &iMetaData ) = 0;

    //! Inherited from ObjectWriter
    //! virtual ObjectWriterPtr asObject();
};

} // End namespace v1
} // End namespace AbcCoreAbstract
} // End namespace Alembic

#endif
