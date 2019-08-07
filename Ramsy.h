//
//  Ramsy.h
//  Foodtruck
//
//  Created by Filipe Malachias Resende on 2019-08-07.
//  Copyright © 2019 Lighthouse Labs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FoodTruck.h"

@interface Ramsy : NSObject <FoodTruckDelegate>

- (double) foodTruck: (FoodTruck *) truck priceForFood:(NSString *)food;

@end
