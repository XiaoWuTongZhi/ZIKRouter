//
//  ZIKViewRouterType+Private.h
//  ZIKRouter
//
//  Created by zuik on 2018/4/8.
//  Copyright © 2018 zuik. All rights reserved.
//

#import "ZIKViewRouterType.h"

@class ZIKRoute;
@interface ZIKViewRouterType<__covariant Destination: id, __covariant RouteConfig: ZIKViewRouteConfiguration *> ()

- (ZIKViewRouter<Destination, RouteConfig> *)routerFromSegueIdentifier:(NSString *)identifier sender:(nullable id)sender destination:(UIViewController *)destination source:(UIViewController *)source;
- (ZIKViewRouter<Destination, RouteConfig> *)routerFromView:(UIView *)destination source:(UIView *)source;
- (BOOL)_validateSupportedRouteTypesForUIView;

- (void)router:(nullable ZIKViewRouter *)router willPerformRouteOnDestination:(id)destination fromSource:(nullable id)source;

- (void)router:(nullable ZIKViewRouter *)router didPerformRouteOnDestination:(id)destination fromSource:(nullable id)source;

- (void)router:(nullable ZIKViewRouter *)router willRemoveRouteOnDestination:(id)destination fromSource:(nullable id)source;

- (void)router:(nullable ZIKViewRouter *)router didRemoveRouteOnDestination:(id)destination fromSource:(nullable id)source;

@end
