//
//  FHStarterProjectViewController.h
//  iOS-Template-App
//
//  Created by Michael Hearne on 25/04/2014.
//  Copyright (c) 2014 FeedHenry. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FH/FH.h>

@interface FHStarterProjectViewController : UIViewController

@property (strong, nonatomic) IBOutlet UIButton *button;
@property (strong, nonatomic) IBOutlet UITextField *name;
@property (strong, nonatomic) IBOutlet UITextView *result;

- (IBAction)cloudCall:(id)sender;

@end
