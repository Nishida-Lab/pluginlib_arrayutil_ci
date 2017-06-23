#ifndef PLUGINLIB_ARRAYUTIL_CI_MAX_H_
#define PLUGINLIB_ARRAYUTIL_CI_MAX_H_

#include <pluginlib_arrayutil_ci/arrayutil_base.h>

namespace arrayutil_plugins_ci_max 
{
  class Max : public arrayutil_ci_base::ArrayUtil
  {
    public:
      Max();
      void loadArray();
      double operate();
  };
}

#endif
