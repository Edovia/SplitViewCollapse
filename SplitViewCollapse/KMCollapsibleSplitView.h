//
//  KMCollapsibleSplitView.h
//  Cinemagraph Pro
//
//  Created by Karl Moskowski on 12/18/2013.
//  Copyright (c) 2013 Karl Moskowski. All rights reserved.
//

@import Cocoa;

@interface KMCollapsibleSplitView : NSSplitView

@property (assign, nonatomic) BOOL animateCollapse;

- (void)toggleRightPane;
- (void)collapseRightPane:(BOOL)collapse;
- (BOOL)isRightPaneCollapsed;

@end
