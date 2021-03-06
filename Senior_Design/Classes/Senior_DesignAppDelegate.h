//
//  Senior_DesignAppDelegate.h
//  Senior_Design
//
//  Created by Taylor Guidon on 3/12/11.
//  Copyright 2011 George Washington University. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Senior_DesignViewController;

@interface Senior_DesignAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    Senior_DesignViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet Senior_DesignViewController *viewController;

@end

