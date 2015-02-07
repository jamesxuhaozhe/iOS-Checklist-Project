//
//  Checklist.h
//  Checklists
//
//  Created by Haozhe Xu on 1/27/15.
//  Copyright (c) 2015 Razeware LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Checklist : NSObject <NSCoding>
@property (nonatomic, copy) NSString *name;
@property (nonatomic, strong) NSMutableArray *items;
@property (nonatomic, copy) NSString *iconName;
- (int)countUncheckedItems;

@end
