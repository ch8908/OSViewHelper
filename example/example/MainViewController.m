//
// Created by Huang ChienShuo on 4/19/14.
// Copyright (c) 2014 oSolve. All rights reserved.
//

#import "MainViewController.h"
#import "OSViewHelper.h"


@interface MainViewController()
@property (nonatomic, strong) UILabel *label;
@end

@implementation MainViewController

- (id) initMainViewController
{
    self = [super initWithNibName:nil bundle:nil];
    if (self)
    {

    }

    return self;
}

- (void) loadView
{
    [super loadView];
    _label = [[UILabel alloc] init];
    self.label.font = [UIFont systemFontOfSize:20];
    self.label.text = @"Test for OSViewHelper";
    [self.view addSubview:self.label];
}

- (void) viewDidLoad
{
    [super viewDidLoad];
}

- (void) viewDidLayoutSubviews
{
    [super viewDidLayoutSubviews];
    [self.label sizeToFit];
    [OSViewHelper alignCenterMiddle:self.label containerFrame:self.view.bounds];
}

@end