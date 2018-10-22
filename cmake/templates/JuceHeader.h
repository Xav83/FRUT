/*

    IMPORTANT! This file is auto-generated each time you run cmake on your
    project - if you alter its contents, your changes may be overwritten!

    This is the header file that your files should include in order to get all the
    JUCE library headers. You should avoid including the JUCE headers directly in
    your own source files, because that wouldn't pick up the correct configuration
    options for your app.

*/

@include_guard_top@

#include "AppConfig.h"
@modules_includes@@binary_data_include@
#if ! DONT_SET_USING_JUCE_NAMESPACE
 // If your code uses a lot of JUCE classes, then this will obviously save you
 // a lot of typing, but can be disabled by setting DONT_SET_USING_JUCE_NAMESPACE.
 using namespace juce;
#endif

#if ! JUCE_DONT_DECLARE_PROJECTINFO
namespace ProjectInfo
{
    const char* const  projectName    = "@JUCER_PROJECT_NAME@";
    const char* const  versionString  = "@JUCER_PROJECT_VERSION@";
    const int          versionNumber  = @JUCER_PROJECT_VERSION_AS_HEX@;
}
#endif@include_guard_bottom@
