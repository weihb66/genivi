/***************************************************************************
*
* Copyright 2010,2011 BMW Car IT GmbH
*
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*        http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*
****************************************************************************/

#ifndef _BEAGLEPLATFORMSURFACE_H_
#define _BEAGLEPLATFORMSURFACE_H_

#include "Surface.h"
#include "GLES2/gl2.h"
#include "EGL/egl.h"
#include "EGL/eglext.h"
#include "PlatformSurface.h"

typedef struct _NATIVE_PIXMAP_STRUCT
{
    long ePixelFormat;
    long eRotation;
    long lWidth;
    long lHeight;
    long lStride;
    long lSizeInBytes;
    long pvAddress;
    long lAddress;
} NATIVE_PIXMAP_STRUCT;

class BeaglePlatformSurface : public PlatformSurface
{
public:
    BeaglePlatformSurface (Surface* surface)
    : PlatformSurface(surface)
    , eglImage(0)
    {
    }

    ~BeaglePlatformSurface()
    {
    }

    // TODO: private/protected
    EGLImageKHR eglImage;
    NATIVE_PIXMAP_STRUCT* pixmap;
    GLuint texture;
};

#endif /* _BEAGLEPLATFORMSURFACE_H_ */