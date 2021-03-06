//
//  ImageUtilsWrapper.h
//  FaceSwap
//
//  Created by Alexander Karlsson on 2019-12-23.
//  Copyright © 2020 Alexander Karlsson. All rights reserved.
//

#ifndef ImageUtilsWrapper_h
#define ImageUtilsWrapper_h

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface ImageUtilsWrapper : NSObject

-(UIImage*)swap:(UIImage*)img1 face2:(UIImage*)img2 landmarks1:(NSArray*)lmarks1 landmarks2:(NSArray*)lmarks2;

@end

#endif /* ImageUtilsWrapper_h */
