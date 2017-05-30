//
//  CafaMenuIterator.h
//  IteratorPattern
//
//  Created by buginux on 2017/5/31.
//  Copyright © 2017年 buginux. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Iterator.h"

@interface CafaMenuIterator : NSObject <Iterator>

- (instancetype)initWithMenuItems:(NSDictionary *)menuItems;

@end
