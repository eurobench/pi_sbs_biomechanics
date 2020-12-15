
#ifndef NEURONDATAREADER_API_H
#define NEURONDATAREADER_API_H

#ifdef NEURONDATAREADER_STATIC_DEFINE
#  define NEURONDATAREADER_API
#  define NEURONDATAREADER_NO_EXPORT
#else
#  ifndef NEURONDATAREADER_API
#    ifdef NeuronDataReader_EXPORTS
        /* We are building this library */
#      define NEURONDATAREADER_API __declspec(dllexport)
#    else
        /* We are using this library */
#      define NEURONDATAREADER_API __declspec(dllimport)
#    endif
#  endif

#  ifndef NEURONDATAREADER_NO_EXPORT
#    define NEURONDATAREADER_NO_EXPORT 
#  endif
#endif

#ifndef NEURONDATAREADER_DEPRECATED
#  define NEURONDATAREADER_DEPRECATED 
#endif

#ifndef NEURONDATAREADER_DEPRECATED_EXPORT
#  define NEURONDATAREADER_DEPRECATED_EXPORT NEURONDATAREADER_API NEURONDATAREADER_DEPRECATED
#endif

#ifndef NEURONDATAREADER_DEPRECATED_NO_EXPORT
#  define NEURONDATAREADER_DEPRECATED_NO_EXPORT NEURONDATAREADER_NO_EXPORT NEURONDATAREADER_DEPRECATED
#endif

#if 0 /* DEFINE_NO_DEPRECATED */
#  ifndef NEURONDATAREADER_NO_DEPRECATED
#    define NEURONDATAREADER_NO_DEPRECATED
#  endif
#endif

#endif
