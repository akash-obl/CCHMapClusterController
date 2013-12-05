//
//  CCHMapCenterOfMassClusterer.h
//  CCHMapClusterController Example iOS
//
//  Created by Claus on 04.12.13.
//  Copyright (c) 2013 Claus Höfele. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "CCHMapClusterer.h"

@interface CCHMapCenterOfMassClusterer : NSObject<CCHMapClusterer>

- (CLLocationCoordinate2D)coordinateForAnnotations:(NSSet *)annotations inMapRect:(MKMapRect)mapRect;

@end