/*
 * ====================== Player.cpp =======================
 *                          -- tpr --
 *                                        创建 -- 2018.12.10
 *                                        修改 -- 2018.12.10
 * ----------------------------------------------------------
 *    存储所有 玩家 信息。
 *    ----------
 *    
 * ----------------------------
 */
#include "Player.h"





/* ===========================================================
 *                    d2m    
 * -----------------------------------------------------------
 * -- 通过一个 diskPlayer 来改写 自己的各字段
 */
void Player::d2m( diskPlayer *_dp ){

    /*
    goptr->id = _dp->go_id;
    goptr->targetPos.x = _dp->posx;
    goptr->targetPos.y = _dp->posy;
    */

}


/* ===========================================================
 *                      m2d  
 * -----------------------------------------------------------
 */
diskPlayer Player::m2d(){

    diskPlayer dp; //- return

    /*
    dp.go_id = goptr->id;
    dp.posx = goptr->targetPos.x;
    dp.posy = goptr->targetPos.y;
    */


    return dp;
}


/* ===========================================================
 *                      init
 * -----------------------------------------------------------
 */
void init(){



}












