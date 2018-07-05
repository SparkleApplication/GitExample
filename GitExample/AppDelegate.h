//
//  AppDelegate.h
//  GitExample
//
//  Created by Saran raj on 05/07/18.
//  Copyright © 2018 Benchmark. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

