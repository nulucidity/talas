//////////////////////////////////////////////////////////////////////////
/// Copyright (c) 1988-2025 $organization$
///
/// This software is provided by the author and contributors ``as is'' 
/// and any express or implied warranties, including, but not limited to, 
/// the implied warranties of merchantability and fitness for a particular 
/// purpose are disclaimed. In no event shall the author or contributors 
/// be liable for any direct, indirect, incidental, special, exemplary, 
/// or consequential damages (including, but not limited to, procurement 
/// of substitute goods or services; loss of use, data, or profits; or 
/// business interruption) however caused and on any theory of liability, 
/// whether in contract, strict liability, or tort (including negligence 
/// or otherwise) arising in any way out of the use of this software, 
/// even if advised of the possibility of such damage.
///
///   File: main_opt.hpp
///
/// Author: $author$
///   Date: 6/23/2025
//////////////////////////////////////////////////////////////////////////
#ifndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_OPT_HPP
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_OPT_HPP

#include "xos/app/console/network/sockets/protocol/shttp/base/main.hpp"
#include "xos/app/console/network/sockets/protocol/http/server/main.hpp"
#include "xos/app/console/network/sockets/protocol/sttp/server/main.hpp"

///////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTP_SERVER_MAIN_OPTIONS_CHARS_EXTEND \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_STTP_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_OPTIONS_CHARS \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_BASE_MAIN_OPTIONS_CHARS_EXTEND \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_HTTP_SERVER_MAIN_OPTIONS_CHARS \

#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_OPTIONS_OPTIONS \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_BASE_MAIN_OPTIONS_OPTIONS_EXTEND \
   XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_HTTP_SERVER_MAIN_OPTIONS_OPTIONS \

///////////////////////////////////////////////////////////////////////
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_ARGS 0
#define XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_ARGV 0,

namespace xos {
namespace app {
namespace console {
namespace network {
namespace sockets {
namespace protocol {
namespace shttp {
namespace server {

/// class main_optt
template 
<class TExtends = xos::app::console::network::sockets::protocol::shttp::base::maint
 <xos::app::console::network::sockets::protocol::shttp::base::main_optt
 <xos::app::console::protocol::sttp::server::maint
 <xos::app::console::protocol::sttp::server::main_optt
 <xos::app::console::protocol::sttp::base::maint
 <xos::app::console::protocol::sttp::base::main_optt
 <xos::app::console::network::sockets::protocol::http::server::maint
 <xos::app::console::network::sockets::protocol::http::server::main_optt
 <xos::app::console::network::sockets::protocol::http::base::maint
 <xos::app::console::network::sockets::protocol::http::base::main_optt
 <xos::app::console::network::sockets::server::maint
 <xos::app::console::network::sockets::server::main_optt
 <xos::app::console::network::sockets::base::maint
 <xos::app::console::network::sockets::base::main_optt
 <xos::app::console::network::server::maint
 <xos::app::console::network::server::main_optt
 <xos::app::console::network::base::maint
 <xos::app::console::network::base::main_optt
 <xos::app::console::protocol::http::server::maint
 <xos::app::console::protocol::http::server::main_optt
 <xos::app::console::protocol::http::base::maint
 <xos::app::console::protocol::http::base::main_optt
 <xos::app::console::protocol::xttp::server::maint
 <xos::app::console::protocol::xttp::server::main_optt
 <xos::app::console::protocol::xttp::base::maint
 <xos::app::console::protocol::xttp::base::main_optt
 <xos::app::console::protocol::ttp::server::maint
 <xos::app::console::protocol::ttp::server::main_optt
 <xos::app::console::protocol::ttp::base::maint
 <xos::app::console::protocol::ttp::base::main_optt
 <xos::app::console::protocol::server::maint
 <xos::app::console::protocol::server::main_optt<> > > > > > > > > > > > > > > > > > > > > > > > > > > > > > > >,  class TImplements = typename TExtends::implements>

class main_optt: virtual public TImplements, public TExtends {
public:
    typedef TImplements implements;
    typedef TExtends extends;
    typedef main_optt derives;

    typedef typename extends::char_t char_t;
    typedef typename extends::end_char_t end_char_t;
    enum { end_char = extends::end_char };
    typedef typename extends::string_t string_t;
    typedef typename extends::reader_t reader_t;
    typedef typename extends::writer_t writer_t;
    typedef typename extends::file_t file_t;

    typedef typename extends::sequence_char_t sequence_char_t;
    typedef typename extends::char_sequence_t char_sequence_t;
    typedef typename extends::char_seeker_t char_seeker_t;
    typedef typename extends::char_reader_t char_reader_t;
    typedef typename extends::char_writer_t char_writer_t;
    typedef typename extends::reader_string_t reader_string_t;
    typedef typename extends::string_reader_t string_reader_t;

    /// constructor / destructor
    main_optt(): run_(0) {
    }
    virtual ~main_optt() {
    }
private:
    main_optt(const main_optt &copy) {
        throw exception(exception_unexpected);
    }

protected:
    typedef typename extends::in_reader_t in_reader_t;
    typedef typename extends::out_writer_t out_writer_t;
    typedef typename extends::err_writer_t err_writer_t;

    typedef typename extends::xttp_message_parts_t xttp_message_parts_t;
    typedef typename extends::xttp_message_reader_t xttp_message_reader_t;
    
    typedef typename extends::json_boolean_t json_boolean_t;
    typedef typename extends::json_number_t json_number_t;
    typedef typename extends::json_string_t json_string_t;
    typedef typename extends::json_node_t json_node_t;
    typedef typename extends::json_array_t json_array_t;
    typedef typename extends::json_object_t json_object_t;

    typedef typename extends::headers_t headers_t;
    typedef typename extends::content_encoding_header_t content_encoding_header_t;
    typedef typename extends::content_type_header_t content_type_header_t;
    typedef typename extends::content_length_header_t content_length_header_t;

    typedef typename extends::content_t content_t;
    typedef typename extends::content_type_t content_type_t;
    typedef typename extends::text_content_type_t text_content_type_t;
    typedef typename extends::json_content_type_t json_content_type_t;
    typedef typename extends::text_content_t text_content_t;

    typedef typename extends::http_message_t http_message_t;
    typedef typename extends::http_message_reader_t http_message_reader_t;

    typedef typename extends::output_t output_t;
    typedef typename output_t::output_to_t output_to_t;
    typedef typename output_t::output_to_t::string_t output_to_string_t;
    typedef typename extends::string_output_t string_output_t;

    typedef typename extends::sttp_content_type_t sttp_content_type_t;

    //////////////////////////////////////////////////////////////////////////
    /// run
    int (derives::*run_)(int argc, char_t** argv, char_t** env);
    virtual int run(int argc, char_t** argv, char_t** env) {
        int err = 0;
        if ((run_)) {
            LOGGER_IS_LOGGED_INFO("(!(err = (this->*run_)(argc, argv, env)))...");
            if (!(err = (this->*run_)(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = (this->*run_)(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(" << err << " = (this->*run_)(argc, argv, env)))");
            }
        } else {
            LOGGER_IS_LOGGED_INFO("(!(err = extends::run(argc, argv, env)))...");
            if (!(err = extends::run(argc, argv, env))) {
                LOGGER_IS_LOGGED_INFO("...(!(" << err << " = extends::run(argc, argv, env)))");
            } else {
                LOGGER_IS_LOGGED_INFO("...failed on (!(err" << err << " = extends::run(argc, argv, env)))");
            }
        }
        return err;
    }

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
    /// on_option
    virtual int on_option
    (int optval, const char_t* optarg, const char_t* optname,
     int optind, int argc, char_t**argv, char_t**env) {
        int err = 0;
        switch(optval) {
        default:
            err = extends::on_option(optval, optarg, optname, optind, argc, argv, env);
        }
        return err;
    }
    //////////////////////////////////////////////////////////////////////////
    /// option_usage
    virtual const char_t* option_usage(const char_t*& optarg, const struct option* longopt) {
        const char_t* chars = "";
        switch(longopt->val) {
        default:
            chars = extends::option_usage(optarg, longopt);
            break;
        }
        return chars;
    }
    //////////////////////////////////////////////////////////////////////////
    /// options
    virtual const char_t* options(const struct option*& longopts) {
        static const char_t* chars = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_OPTIONS_CHARS;
        static struct option optstruct[]= {
            XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_OPTIONS_OPTIONS
            {0, 0, 0, 0}};
        longopts = optstruct;
        return chars;
    }
    /// arguments
    virtual const char_t* arguments(const char_t**& argv) {
        static const char_t* _args = XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_ARGS;
        static const char_t* _argv[] = {
            XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_ARGV
            0};
        argv = _argv;
        return _args;
    }
    //////////////////////////////////////////////////////////////////////////

    //////////////////////////////////////////////////////////////////////////
protected:
}; /// class main_optt 
typedef main_optt<> main_opt;

} /// namespace server 
} /// namespace shttp 
} /// namespace protocol 
} /// namespace sockets 
} /// namespace network 
} /// namespace console 
} /// namespace app 
} /// namespace xos 

#endif /// ndef XOS_APP_CONSOLE_NETWORK_SOCKETS_PROTOCOL_SHTTP_SERVER_MAIN_OPT_HPP
