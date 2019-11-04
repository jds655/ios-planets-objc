//
//  LSIPlanet.h
//  ios-planets-objc
//
//  Created by Lambda_School_Loaner_214 on 11/4/19.
//  Copyright © 2019 Lambda School. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface LSIPlanet : NSObject
    
@property NSString *name;
@property NSString *imageName;

- (instancetype)initWithName:(NSString *)name imageName:(NSString *)imageName;
@end
