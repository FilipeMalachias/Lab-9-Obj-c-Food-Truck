//
//  main.m
//  PigLatin-Lab13
//
//  Created by Filipe Malachias Resende on 2019-08-02.
//  Copyright © 2019 malachias. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FoodTruck;

@protocol FoodTruckDelegate <NSObject>

-(double) foodTruck: (FoodTruck *) truck priceForFood: (NSString *)food;

@end


@interface FoodTruck : NSObject

@property (nonatomic, weak) id<FoodTruckDelegate> delegate;

-(instancetype)initWithName:(NSString *)pun andFoodType:(NSString *)foodType;

-(void)serve:(int)orders;
-(void)cashOut;

@end
