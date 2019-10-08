// Copyright 2019 Josh Pieper, jjp@pobox.com.  All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "mjlib/io/realtime_executor.h"

#include <boost/asio/io_context.hpp>
#include <boost/test/auto_unit_test.hpp>

using mjlib::io::RealtimeExecutor;

BOOST_AUTO_TEST_CASE(RealtimeExecutorCompilation) {
  // This mostly verifies that various constructs compile.
  boost::asio::io_context context;
  RealtimeExecutor dut{context.get_executor()};
}