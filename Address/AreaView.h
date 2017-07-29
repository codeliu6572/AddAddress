//
//  AreaView.h
//  Shihanbainian
//
//  Created by apple on 2017/7/13.
//  Copyright © 2017年 Codeliu. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AreaSelectDelegate <NSObject>

- (void)selectIndex:(NSInteger)index selectID:(NSString *)areaID;

- (void)getSelectAddressInfor:(NSString *)addressInfor;
@end
@interface AreaView : UIView<UIScrollViewDelegate,UITableViewDelegate,UITableViewDataSource>
@property(nonatomic,strong)UIScrollView *areaScrollView;
@property(nonatomic,strong)UIView *areaWhiteBaseView;
@property(nonatomic,strong)NSMutableArray *provinceArray;
@property(nonatomic,strong)NSMutableArray *cityArray;
@property(nonatomic,strong)NSMutableArray *regionsArray;
@property(nonatomic,strong)id <AreaSelectDelegate> address_delegate;

- (void)showAreaView;
- (void)hidenAreaView;

@end
