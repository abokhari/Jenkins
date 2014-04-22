//
//  JAppDelegate.h
//  Jenkins
//
//  Created by Applico on 4/22/14.
//  Copyright (c) 2014 Applico. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface JAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
