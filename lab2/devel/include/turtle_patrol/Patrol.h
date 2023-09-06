// Generated by gencpp from file turtle_patrol/Patrol.msg
// DO NOT EDIT!


#ifndef TURTLE_PATROL_MESSAGE_PATROL_H
#define TURTLE_PATROL_MESSAGE_PATROL_H

#include <ros/service_traits.h>


#include <turtle_patrol/PatrolRequest.h>
#include <turtle_patrol/PatrolResponse.h>


namespace turtle_patrol
{

struct Patrol
{

typedef PatrolRequest Request;
typedef PatrolResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct Patrol
} // namespace turtle_patrol


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::turtle_patrol::Patrol > {
  static const char* value()
  {
    return "081833b8303250abb8d3090d1d3e17e7";
  }

  static const char* value(const ::turtle_patrol::Patrol&) { return value(); }
};

template<>
struct DataType< ::turtle_patrol::Patrol > {
  static const char* value()
  {
    return "turtle_patrol/Patrol";
  }

  static const char* value(const ::turtle_patrol::Patrol&) { return value(); }
};


// service_traits::MD5Sum< ::turtle_patrol::PatrolRequest> should match
// service_traits::MD5Sum< ::turtle_patrol::Patrol >
template<>
struct MD5Sum< ::turtle_patrol::PatrolRequest>
{
  static const char* value()
  {
    return MD5Sum< ::turtle_patrol::Patrol >::value();
  }
  static const char* value(const ::turtle_patrol::PatrolRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::turtle_patrol::PatrolRequest> should match
// service_traits::DataType< ::turtle_patrol::Patrol >
template<>
struct DataType< ::turtle_patrol::PatrolRequest>
{
  static const char* value()
  {
    return DataType< ::turtle_patrol::Patrol >::value();
  }
  static const char* value(const ::turtle_patrol::PatrolRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::turtle_patrol::PatrolResponse> should match
// service_traits::MD5Sum< ::turtle_patrol::Patrol >
template<>
struct MD5Sum< ::turtle_patrol::PatrolResponse>
{
  static const char* value()
  {
    return MD5Sum< ::turtle_patrol::Patrol >::value();
  }
  static const char* value(const ::turtle_patrol::PatrolResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::turtle_patrol::PatrolResponse> should match
// service_traits::DataType< ::turtle_patrol::Patrol >
template<>
struct DataType< ::turtle_patrol::PatrolResponse>
{
  static const char* value()
  {
    return DataType< ::turtle_patrol::Patrol >::value();
  }
  static const char* value(const ::turtle_patrol::PatrolResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // TURTLE_PATROL_MESSAGE_PATROL_H
