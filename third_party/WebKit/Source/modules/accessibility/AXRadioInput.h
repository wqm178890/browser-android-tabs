// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef AXRadioInput_h
#define AXRadioInput_h

#include "modules/accessibility/AXLayoutObject.h"

namespace blink {

class AXObjectCacheImpl;
class HTMLInputElement;

class AXRadioInput final : public AXLayoutObject {
  WTF_MAKE_NONCOPYABLE(AXRadioInput);

 public:
  static AXRadioInput* Create(LayoutObject*, AXObjectCacheImpl&);
  ~AXRadioInput() override {}

  bool IsAXRadioInput() const override { return true; }
  void UpdatePosAndSetSize(int position = 0);
  void RequestUpdateToNextNode(bool forward);
  HTMLInputElement* FindFirstRadioButtonInGroup(
      HTMLInputElement* current) const;

  int PosInSet() const final;
  int SetSize() const final;

 private:
  AXRadioInput(LayoutObject*, AXObjectCacheImpl&);
  bool CalculatePosInSet();
  int CountFromFirstElement() const;
  HTMLInputElement* GetElement() const;
  int SizeOfRadioGroup() const;

  int pos_in_set_;
  int set_size_;
};

DEFINE_AX_OBJECT_TYPE_CASTS(AXRadioInput, IsAXRadioInput());

}  // namespace blink

#endif  // AXRadioInput_h
