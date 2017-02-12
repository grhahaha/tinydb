
#ifndef __SRC_BASE_H__
#define __SRC_BASE_H__

#include <cassert>
#include <cstdlib>

#include "types.h"

#include "utils/file.h"

// 全局状态
extern RunStatus                    g_RunStatus;

// 全局日志模块
extern utils::LogFile *				g_Logger;

// 日志宏定义
#define LOGGER( level, ... ) 		    g_Logger->printp( level, "%T [%L]\t : ", __VA_ARGS__ )
#define LOG_FATAL( ... )			    LOGGER( utils::LogFile::eLogLevel_Fatal, __VA_ARGS__ )
#define LOG_ERROR( ... )			    LOGGER( utils::LogFile::eLogLevel_Error, __VA_ARGS__ )
#define LOG_WARN( ... )				    LOGGER( utils::LogFile::eLogLevel_Warn, __VA_ARGS__ )
#define LOG_INFO( ... )				    LOGGER( utils::LogFile::eLogLevel_Info, __VA_ARGS__ )
#define LOG_TRACE( ... )			    LOGGER( utils::LogFile::eLogLevel_Trace, __VA_ARGS__ )
#define LOG_DEBUG( ... )			    LOGGER( utils::LogFile::eLogLevel_Debug, __VA_ARGS__ )

// 向上溢出
#define UP_OVERFLOW(value, addon)       ( (addon)>0 && (value)+(addon)<(value) )
// 向下溢出
#define DOWN_OVERFLOW(value, addon)     ( (addon)<0 && (value)<(uint32_t)(~(addon)+1) )
// 安全检查
#define CHECK_OVERFLOW(value, addon)    ( UP_OVERFLOW((value), (addon)) || DOWN_OVERFLOW((value), (addon)) )

#endif
