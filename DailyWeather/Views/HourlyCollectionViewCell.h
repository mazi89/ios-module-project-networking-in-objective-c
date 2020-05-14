//
//  HourlyCollectionViewCell.h
//  DailyWeather
//
//  Created by Karen Rodriguez on 5/13/20.
//  Copyright © 2020 Lambda, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class LSIHourlyForecast;
@interface HourlyCollectionViewCell : UICollectionViewCell

@property (nonatomic) LSIHourlyForecast *forecast;
@property (nonatomic) BOOL isNow;

@end

NS_ASSUME_NONNULL_END
