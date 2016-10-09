//
//  RecordingTVC.h
//  speakText
//
//  Created by Martin Conklin on 2016-10-08.
//  Copyright © 2016 Martin Conklin. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Recording+CoreDataClass.h"

@interface RecordingTVC : UITableViewController

@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) Recording *recording;

@end