// Copyright 2018 Josh Pieper, jjp@pobox.com.
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

#pragma once

#include "mjlib/micro/command_manager.h"
#include "mjlib/micro/persistent_config.h"
#include "mjlib/micro/pool_ptr.h"
#include "mjlib/micro/telemetry_manager.h"

#include "moteus/millisecond_timer.h"

namespace moteus {

/// Utilities for bringing up the controller board.
class BoardDebug {
 public:
  BoardDebug(mjlib::micro::Pool*,
             mjlib::micro::PersistentConfig*,
             mjlib::micro::CommandManager*,
             mjlib::micro::TelemetryManager*,
             MillisecondTimer*);
  ~BoardDebug();

  void Start();
  void PollMillisecond();

 private:
  class Impl;
  mjlib::micro::PoolPtr<Impl> impl_;
};

}
