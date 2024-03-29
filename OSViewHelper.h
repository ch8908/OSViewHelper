//
// Created by Huang ChienShuo on 9/8/13.
// Copyright (c) 2013 oSolve. All rights reserved.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import <Foundation/Foundation.h>

extern CGFloat const VIEWS_NAVIGATION_BAR_HEIGHT;
extern CGFloat const VIEWS_STATUS_BAR_HEIGHT;
extern CGFloat const VIEWS_PAGE_CONTROL_HEIGHT;

@interface OSViewHelper : NSObject
+ (BOOL) isRetina;

+ (BOOL) isRetina4;

+ (CGFloat) screenWidth;

+ (CGFloat) screenHeight;

+ (CGFloat) viewHeight;

+ (void) locate:(UIView *) target x:(CGFloat) x y:(CGFloat) y;

+ (void) locate:(UIView *) target y:(CGFloat) y;

+ (void) locate:(UIView *) target x:(CGFloat) x;

+ (CGFloat) rightOf:(UIView *) view;

+ (CGFloat) bottomOf:(UIView *) view;

+ (void) alignCenter:(UIView *) target containerWidth:(CGFloat) containerWidth;

+ (void) alignCenterMiddle:(UIView *) target containerFrame:(CGRect) containerFrame;

+ (void) alignMiddle:(UIView *) target containerHeight:(CGFloat) containerHeight;

+ (void) alignBottom:(UIView *) source withTarget:(UIView *) target;

+ (void) alignMiddle:(UIView *) source withTarget:(UIView *) target;

+ (void) resize:(UIView *) target containerSize:(CGSize) size;

+ (void) resize:(UIView *) target containerWidth:(CGFloat) containerWidth;

+ (void) resize:(UIView *) target containerHeight:(CGFloat) containerHeight;

+ (void) move:(UIView *) target deltaX:(CGFloat) dx deltaY:(CGFloat) dy;

+ (void) alignTop:(UIView *) view withTarget:(UIView *) target;

+ (void) below:(UIView *) view withTarget:(UIView *) target;

+ (void) alignCenter:(UIView *) source withTarget:(UIView *) target;

+ (CGFloat) yOfView:(UIView *) view;

+ (CGFloat) xOfView:(UIView *) view;

+ (CGFloat) heightOfView:(UIView *) view;

+ (CGFloat) widthOfView:(UIView *) view;

+ (CGFloat) yOfRect:(CGRect) frame;

+ (CGFloat) xOfRect:(CGRect) frame;

+ (CGFloat) heightOfRect:(CGRect) frame;

+ (CGFloat) widthOfRect:(CGRect) frame;

+ (CGFloat) statusBarHeight;

+ (void) alignParentBottom:(UIView *) view withParent:(UIView *) parentView;
@end