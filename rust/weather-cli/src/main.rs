fn main() {
    let api_token: String = std::env::var("API_TOKEN")
          .expect("expected there to be an api token");

    dbg! (api_token);


    // enum Result<THING_WE_WANT, ERROR_THAT_COULD_HAPPEN> {
        // Ok(THING_WE_WANT),
        // Err(ERROR_THAT_COULD_HAPPEN)
    // }
}
