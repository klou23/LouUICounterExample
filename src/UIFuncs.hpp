#ifndef LOUUICOUNTEREXAMPLE_UIFUNCS_HPP
#define LOUUICOUNTEREXAMPLE_UIFUNCS_HPP

lv_res_t incrementCounter(lv_obj_t *obj){
    counter++;
    label->setText("Counter: " + std::to_string(counter));
    return LV_RES_OK;
}

#endif //LOUUICOUNTEREXAMPLE_UIFUNCS_HPP
