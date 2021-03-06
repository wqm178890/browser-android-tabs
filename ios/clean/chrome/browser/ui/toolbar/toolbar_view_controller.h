// Copyright 2016 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef IOS_CLEAN_CHROME_BROWSER_UI_TOOLBAR_TOOLBAR_VIEW_CONTROLLER_H_
#define IOS_CLEAN_CHROME_BROWSER_UI_TOOLBAR_TOOLBAR_VIEW_CONTROLLER_H_

#import <UIKit/UIKit.h>

#import "ios/clean/chrome/browser/ui/animators/zoom_transition_delegate.h"
#import "ios/clean/chrome/browser/ui/toolbar/toolbar_consumer.h"

@protocol ToolsMenuCommands;
@protocol NavigationCommands;

// View controller for a toolbar, which will show a horizontal row of
// controls and/or labels.
// This view controller will fill its container; it is up to the containing
// view controller or presentation controller to configure an appropriate
// height for it.
@interface ToolbarViewController
    : UIViewController<ZoomTransitionDelegate, ToolbarConsumer>

// The dispatcher for this view controller
@property(nonatomic, weak) id<ToolsMenuCommands, NavigationCommands> dispatcher;

@property(nonatomic, strong) UIViewController* locationBarViewController;

@end

#endif  // IOS_CLEAN_CHROME_BROWSER_UI_TOOLBAR_TOOLBAR_VIEW_CONTROLLER_H_
