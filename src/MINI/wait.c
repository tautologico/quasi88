/***********************************************************************
 * ウエイト調整処理 (システム依存)
 *
 *	詳細は、 wait.h 参照
 ************************************************************************/

#include "quasi88.h"
#include "device.h"

#include "wait.h"



/****************************************************************************
 * ウェイト調整処理の初期化／終了
 *****************************************************************************/
int	wait_vsync_init(void)
{
    return TRUE;
}

void	wait_vsync_exit(void)
{
}



/****************************************************************************
 * ウェイト調整処理の設定
 *****************************************************************************/
void	wait_vsync_setup(long vsync_cycle_us, int do_sleep)
{
}



/****************************************************************************
 * ウェイト調整処理の実行
 *****************************************************************************/
int	wait_vsync_update(void)
{
    return WAIT_OVER;
}