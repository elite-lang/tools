/* 
* @Author: sxf
* @Date:   2015-12-24 20:14:08
* @Last Modified by:   sxf
* @Last Modified time: 2015-12-24 20:22:31
*/

#ifndef ELITE_TOOLS_H
#define ELITE_TOOLS_H

#if defined(_WIN32)
#error "Those tools are for linux x64"
#endif
#if defined(__linux__)
#define ELITE_TOOLS_PATH "/tools"
#endif
#if defined(__APPLE__) && defined(__MACH__)
#error "Those tools are for linux x64"
#endif

#endif // ELITE_TOOLS_H
