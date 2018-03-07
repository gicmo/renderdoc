//=============================================================================
/// Copyright (c) 2017 Advanced Micro Devices, Inc. All rights reserved.
/// \author AMD Developer Tools Team
/// \file
/// \brief  Version number info for the Developer Driver tools.
//=============================================================================

#ifndef _VERSION_H_
#define _VERSION_H_

#define STRINGIFY_VALUE(x) STRINGIFY(x)
#define STRINGIFY(x) #x

#define DEV_DRIVER_TOOLS_MAJOR_VERSION      1           ///< Major version number.
#define DEV_DRIVER_TOOLS_MINOR_VERSION      11          ///< Minor version number.
#define DEV_DRIVER_TOOLS_BUILD_NUMBER       0           ///< Build number.
#define DEV_DRIVER_TOOLS_REVISION_NUMBER    0           ///< Revision number.

#ifdef HEADLESS
#define DEV_DRIVER_TOOLS_BUILD_SUFFIX       "- CLI"     ///< The build suffix to apply to the product name for headess build.
#else
#define DEV_DRIVER_TOOLS_BUILD_SUFFIX       ""          ///< The build suffix to apply to the product name.
#endif // HEADLESS

#define DEV_DRIVER_TOOLS_BUILD_DATE_STRING  "12/12/2017" ///< Build date string.

#define DEV_DRIVER_TOOLS_VERSION_STRING     STRINGIFY_VALUE(DEV_DRIVER_TOOLS_MAJOR_VERSION) "." \
                                            STRINGIFY_VALUE(DEV_DRIVER_TOOLS_MINOR_VERSION) "." \
                                            STRINGIFY_VALUE(DEV_DRIVER_TOOLS_BUILD_NUMBER) "." \
                                            STRINGIFY_VALUE(DEV_DRIVER_TOOLS_REVISION_NUMBER)  ///< The full revision string.

#endif // _VERSION_H_
