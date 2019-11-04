//
//  LSIPlanetCollectionViewCell.h
//  ios-planets-objc
//
//  Created by Lambda_School_Loaner_214 on 11/4/19.
//  Copyright © 2019 Lambda School. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface LSIPlanetCollectionViewCell : UICollectionViewCell
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (weak, nonatomic) IBOutlet UILabel *planetLabel;
@end

NS_ASSUME_NONNULL_END
