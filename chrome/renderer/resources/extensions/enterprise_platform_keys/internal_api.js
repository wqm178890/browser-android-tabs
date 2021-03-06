// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

var binding = require('binding')
                  .Binding.create('enterprise.platformKeysInternal')
                  .generate();

exports.$set('getTokens', binding.getTokens);
exports.$set('generateKey', binding.generateKey);
exports.$set('sign', binding.sign);
