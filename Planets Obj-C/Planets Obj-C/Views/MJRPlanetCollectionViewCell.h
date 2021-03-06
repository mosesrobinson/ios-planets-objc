//
//  MJRPlanetCollectionViewCell.h
//  Planets Obj-C
//
//  Created by Moses Robinson on 3/25/19.
//  Copyright © 2019 Moses Robinson. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface MJRPlanetCollectionViewCell : UICollectionViewCell

@property (strong, nonatomic) IBOutlet UIImageView *planetImage;
@property (strong, nonatomic) IBOutlet UILabel *planetLabel;

@end

NS_ASSUME_NONNULL_END
