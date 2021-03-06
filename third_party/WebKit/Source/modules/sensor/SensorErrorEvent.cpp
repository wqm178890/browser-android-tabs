// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "modules/sensor/SensorErrorEvent.h"

#include "bindings/core/v8/V8Binding.h"
#include "v8/include/v8.h"

namespace blink {

SensorErrorEvent::~SensorErrorEvent() {}

SensorErrorEvent::SensorErrorEvent(const AtomicString& event_type,
                                   DOMException* error)
    : Event(event_type, false, false)  // does not bubble, is not cancelable.
      ,
      error_(error) {
  DCHECK(error_);
}

SensorErrorEvent::SensorErrorEvent(const AtomicString& event_type,
                                   const SensorErrorEventInit& initializer)
    : Event(event_type, initializer) {}

const AtomicString& SensorErrorEvent::InterfaceName() const {
  return EventNames::SensorErrorEvent;
}

DEFINE_TRACE(SensorErrorEvent) {
  visitor->Trace(error_);
  Event::Trace(visitor);
}

}  // namespace blink
