#ifndef OBJECT_HPP
#define OBJECT_HPP

#include <cstdint>
#include <string>
#include <vector>

namespace cpptrace {

struct object_frame;
struct safe_object_frame;

using frame_ptr = std::uintptr_t;

namespace detail {
    object_frame get_frame_object_info(frame_ptr address);

    std::vector<object_frame> get_frames_object_info(const std::vector<frame_ptr>& addresses);

    object_frame resolve_safe_object_frame(const safe_object_frame& frame);

    std::string resolve_l_name(const char* l_name);
}
}

#endif
