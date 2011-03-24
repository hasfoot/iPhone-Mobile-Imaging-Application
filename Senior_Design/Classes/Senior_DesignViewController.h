//
//  Senior_DesignViewController.h
//  Senior_Design
//
//  Created by Taylor Guidon on 3/12/11.
//  Copyright 2011 George Washington University. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Senior_DesignViewController : UIViewController {
	IBOutlet UIButton *findMe;
	IBOutlet UILabel *success;
}

@property (retain, nonatomic) UIButton *findMe;
@property (retain, nonatomic) UILabel *success;

-(IBAction)foundMe:(id)sender;

@end

