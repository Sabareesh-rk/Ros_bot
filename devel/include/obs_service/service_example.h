// Generated by gencpp from file obs_service/service_example.msg
// DO NOT EDIT!


#ifndef OBS_SERVICE_MESSAGE_SERVICE_EXAMPLE_H
#define OBS_SERVICE_MESSAGE_SERVICE_EXAMPLE_H

#include <ros/service_traits.h>


#include <obs_service/service_exampleRequest.h>
#include <obs_service/service_exampleResponse.h>


namespace obs_service
{

struct service_example
{

typedef service_exampleRequest Request;
typedef service_exampleResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct service_example
} // namespace obs_service


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::obs_service::service_example > {
  static const char* value()
  {
    return "570658227795c638a4cd95466c1e01dc";
  }

  static const char* value(const ::obs_service::service_example&) { return value(); }
};

template<>
struct DataType< ::obs_service::service_example > {
  static const char* value()
  {
    return "obs_service/service_example";
  }

  static const char* value(const ::obs_service::service_example&) { return value(); }
};


// service_traits::MD5Sum< ::obs_service::service_exampleRequest> should match
// service_traits::MD5Sum< ::obs_service::service_example >
template<>
struct MD5Sum< ::obs_service::service_exampleRequest>
{
  static const char* value()
  {
    return MD5Sum< ::obs_service::service_example >::value();
  }
  static const char* value(const ::obs_service::service_exampleRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::obs_service::service_exampleRequest> should match
// service_traits::DataType< ::obs_service::service_example >
template<>
struct DataType< ::obs_service::service_exampleRequest>
{
  static const char* value()
  {
    return DataType< ::obs_service::service_example >::value();
  }
  static const char* value(const ::obs_service::service_exampleRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::obs_service::service_exampleResponse> should match
// service_traits::MD5Sum< ::obs_service::service_example >
template<>
struct MD5Sum< ::obs_service::service_exampleResponse>
{
  static const char* value()
  {
    return MD5Sum< ::obs_service::service_example >::value();
  }
  static const char* value(const ::obs_service::service_exampleResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::obs_service::service_exampleResponse> should match
// service_traits::DataType< ::obs_service::service_example >
template<>
struct DataType< ::obs_service::service_exampleResponse>
{
  static const char* value()
  {
    return DataType< ::obs_service::service_example >::value();
  }
  static const char* value(const ::obs_service::service_exampleResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // OBS_SERVICE_MESSAGE_SERVICE_EXAMPLE_H