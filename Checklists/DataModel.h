//
//  DataModel.h
//  Checklists
//
//  Created by Haozhe Xu on 1/30/15.
//  Copyright (c) 2015 Razeware LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataModel : NSObject
@property (nonatomic, strong) NSMutableArray *lists;
- (void)saveChecklists;
- (NSInteger)indexOfSelectedChecklist;
- (void)setIndexOfSelectedChecklist:(NSInteger)index;
- (void)sortChecklists;
+ (NSInteger)nextChecklistItemId;
@end
