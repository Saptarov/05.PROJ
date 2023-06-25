#ifndef COMMON_H
#define COMMON_H

#include <iostream>
#include <algorithm>
#include <exception>
#include <cassert>
#include <type_traits>
#include <vector>
#include <list>
#include <map>
#include <set>
#include <tuple>
#include <memory>
#include <mutex>
#include <fstream>

using widget_event_t = uint16_t;
using ret_result_t = uint16_t;

#define assertmsg(flag, msg) assert(((void)msg, flag))
#define mout(msg)       {std::cout <<  msg << std::endl;}
#define merr(msg)       {std::cerr << "Error: " << __FILE__ << __FUNCTION__ << ": " << msg << std::endl;}
#define print_event(widgetName){std::cout << __FILE__ << " " << widgetName << " call " << __FUNCTION__ << std::endl;}
template <typename T>
using sptr = std::shared_ptr<T>;

template <typename T, typename ...Args> sptr<T> make_sptr(Args ...args) {
    return std::make_shared<T>(args...);
}

#endif // COMMON_H
